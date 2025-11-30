// // qos_config.c 
// #include <stdio.h> 
 
// // Define QoS parameters 
// #define HIGH_PRIORITY_BANDWIDTH 80 // Mbps 
// #define LOW_PRIORITY_BANDWIDTH 20 // Mbps 
 
// // Function to simulate QoS configuration 
// void configureQoS() { 
//     printf("Configuring QoS:\n"); 
//     printf("High priority bandwidth: %d Mbps\n", HIGH_PRIORITY_BANDWIDTH); 
//     printf("Low priority bandwidth: %d Mbps\n", LOW_PRIORITY_BANDWIDTH); 
// } 
 
// int main() { 
//     configureQoS(); 
//     return 0; 
// } 

#include <stdio.h> 
 
// Define QoS parameters (same as in qos_config.c) 
#define HIGH_PRIORITY_BANDWIDTH 80 // Mbps 
#define LOW_PRIORITY_BANDWIDTH 20 // Mbps 
 
// Function to simulate network traffic and measure impact 
void simulateTraffic() { 
    int high_priority_packets = 1000; 
    int low_priority_packets = 500; 
    int high_priority_throughput = high_priority_packets * HIGH_PRIORITY_BANDWIDTH; 
    int low_priority_throughput = low_priority_packets * LOW_PRIORITY_BANDWIDTH; 
 
    printf("Simulating network traffic:\n"); 
    printf("High priority throughput: %d Mbps\n", high_priority_throughput); 
    printf("Low priority throughput: %d Mbps\n", low_priority_throughput); 
} 
 
int main() { 
    simulateTraffic(); 
    return 0; 
} 