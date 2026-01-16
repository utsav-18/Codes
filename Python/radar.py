import pygame
import math
import sys

# --- Radar Settings ---
WIDTH, HEIGHT = 800, 800
CENTER = (WIDTH // 2, HEIGHT // 2)
RADIUS = 300
SWEEP_SPEED = 2  # degrees per frame
MAX_DISTANCE_CM = 300  # Max range of radar in cm

# --- Pygame Setup ---
pygame.init()
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Realistic Radar with Distances")
clock = pygame.time.Clock()
font = pygame.font.SysFont("Arial", 18)

# --- Colors ---
BLACK = (0, 0, 0)
GREEN = (0, 255, 0)
DARK_GREEN = (0, 100, 0)
YELLOW = (255, 255, 0)

# --- Fixed Points (Objects on Radar) ---
# Format: (angle_in_degrees, distance_in_cm)
object_data = [
    (20, 100),
    (45, 150),
    (90, 200),
    (135, 250),
    (160, 180)
]

# Convert polar (angle, distance) to Cartesian (x, y)
points = []
for angle_deg, dist_cm in object_data:
    dist_px = (dist_cm / MAX_DISTANCE_CM) * RADIUS  # Scale cm to pixels
    angle_rad = math.radians(angle_deg)
    x = CENTER[0] + dist_px * math.cos(angle_rad)
    y = CENTER[1] - dist_px * math.sin(angle_rad)
    points.append((x, y, dist_cm, angle_deg))

angle = 0  # Sweep start

def draw_radar():
    # Fill background
    screen.fill(BLACK)

    # Draw concentric circles with distance labels
    for i, r in enumerate(range(50, RADIUS + 50, 50), start=1):
        pygame.draw.circle(screen, DARK_GREEN, CENTER, r, 1)
        label = font.render(f"{(r / RADIUS) * MAX_DISTANCE_CM:.0f} cm", True, GREEN)
        screen.blit(label, (CENTER[0] + r - 20, CENTER[1] + 5))

    # Draw cross lines
    pygame.draw.line(screen, DARK_GREEN, (CENTER[0] - RADIUS, CENTER[1]), (CENTER[0] + RADIUS, CENTER[1]), 1)
    pygame.draw.line(screen, DARK_GREEN, (CENTER[0], CENTER[1] - RADIUS), (CENTER[0], CENTER[1] + RADIUS), 1)

    # Draw detected points with distance labels and highlight if sweep is near
    for x, y, dist_cm, point_angle in points:
        # Highlight if sweep is near the point's angle
        if abs((angle - point_angle + 360) % 360) < 5:
            color = YELLOW
        else:
            color = GREEN
        pygame.draw.circle(screen, color, (int(x), int(y)), 5)
        label = font.render(f"{dist_cm} cm", True, color)
        screen.blit(label, (int(x) + 8, int(y) - 8))

    # Draw sweeping line
    sweep_x = CENTER[0] + RADIUS * math.cos(math.radians(angle))
    sweep_y = CENTER[1] - RADIUS * math.sin(math.radians(angle))
    pygame.draw.line(screen, GREEN, CENTER, (sweep_x, sweep_y), 3)

def main():
    global angle
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()

        draw_radar()
        angle = (angle + SWEEP_SPEED) % 360
        pygame.display.flip()
        clock.tick(60)

if __name__ == "__main__":
    main()