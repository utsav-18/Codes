import kagglehub
import pandas as pd

# Download latest version of dataset
path = kagglehub.dataset_download("kyanyoga/sample-sales-data")
print("Path to dataset files:", path)

# Load the CSV file (adjust filename if different)
df = pd.read_csv(path + "/sales_data_sample.csv", encoding="latin1")

# Preview dataset
print(df.head())

# 1. Total Sales (assuming 'SALES' column exists)
total_sales = df['SALES'].sum()

# 2. Total Quantity
total_quantity = df['QUANTITYORDERED'].sum()

# 3. Total Profit (assuming 'SALES' - 'COST' or 'PRICEEACH' * 'QUANTITYORDERED')
# If 'PRICEEACH' and 'QUANTITYORDERED' exist:
df['Profit'] = df['SALES'] - (df['PRICEEACH'] * df['QUANTITYORDERED'])
total_profit = df['Profit'].sum()

# 4. Average Order Value (AOV)
average_order_value = df['SALES'].mean()

# 5. Descriptive statistics
minimum_sales = df['SALES'].min()
maximum_sales = df['SALES'].max()
mean_sales = df['SALES'].mean()
median_sales = df['SALES'].median()
std_sales = df['SALES'].std()

# Print results
print("Total Sales:", total_sales)
print("Total Quantity:", total_quantity)
print("Total Profit:", total_profit)
print("Average Order Value:", average_order_value)
print("Minimum Sales:", minimum_sales)
print("Maximum Sales:", maximum_sales)
print("Mean Sales:", mean_sales)
print("Median Sales:", median_sales)
print("Standard Deviation of Sales:", std_sales)

sales_by_category = df.groupby('PRODUCTLINE')['SALES'].sum()

# --- Sales by Sub-Category (DEALSIZE) ---
sales_by_subcategory = df.groupby('DEALSIZE')['SALES'].sum()

# --- Sales by Region (COUNTRY or TERRITORY) ---
sales_by_region = df.groupby('COUNTRY')['SALES'].sum()

# --- Sales by Customer ---
sales_by_customer = df.groupby('CUSTOMERNAME')['SALES'].sum()

# --- Sales by Product ---
sales_by_product = df.groupby('PRODUCTCODE')['SALES'].sum()

# Print results
print("\nSales by Category:\n", sales_by_category)
print("\nSales by Sub-Category:\n", sales_by_subcategory)
print("\nSales by Region:\n", sales_by_region)
print("\nSales by Customer:\n", sales_by_customer)
print("\nSales by Product:\n", sales_by_product)

 # --- Diagnostic Analysis ---

# 1. Region/Category contribution to sales change
sales_by_region_month = df.groupby(['COUNTRY', 'MONTH_ID'])['SALES'].sum().unstack(fill_value=0)
sales_by_category_month = df.groupby(['PRODUCTLINE', 'MONTH_ID'])['SALES'].sum().unstack(fill_value=0)

# Calculate month-over-month change
region_change = sales_by_region_month.diff(axis=1)
category_change = sales_by_category_month.diff(axis=1)

print("\nRegion-wise Sales Change:\n", region_change)
print("\nCategory-wise Sales Change:\n", category_change)

# 2. Discounts effect (if 'MSRP' column exists)
if 'MSRP' in df.columns:
    df['Discount'] = (df['MSRP'] - df['PRICEEACH']) / df['MSRP']
    avg_discount_by_month = df.groupby('MONTH_ID')['Discount'].mean()
    print("\nAverage Discount by Month:\n", avg_discount_by_month)

# 3. Fewer products sold (quantity trend)
quantity_by_month = df.groupby('MONTH_ID')['QUANTITYORDERED'].sum()
print("\nQuantity Trend by Month:\n", quantity_by_month)

# 4. Seasonal effect (sales trend by month)
sales_by_month = df.groupby('MONTH_ID')['SALES'].sum()
print("\nSales Trend by Month (Seasonality):\n", sales_by_month)

# --- Probability Diagnostics ---

# 1. Products with highest returns but negative profit
if 'STATUS' in df.columns:  # assuming STATUS column marks 'Returned'
    returned_products = df[df['STATUS'] == 'Returned'].groupby('PRODUCTCODE')['Profit'].sum()
    loss_return_products = returned_products[returned_products < 0]
    print("\nProducts with High Returns but Negative Profit:\n", loss_return_products)

# 2. Categories with high sales but low margins
category_margin = df.groupby('PRODUCTLINE').agg({'SALES':'sum','Profit':'sum'})
category_margin['Margin%'] = category_margin['Profit'] / category_margin['SALES'] * 100
low_margin_categories = category_margin[category_margin['Margin%'] < category_margin['Margin%'].mean()]
print("\nCategories with High Sales but Low Margins:\n", low_margin_categories)

# 3. Loss-making customers
customer_profit = df.groupby('CUSTOMERNAME')['Profit'].sum()
loss_customers = customer_profit[customer_profit < 0]
print("\nLoss-making Customers:\n", loss_customers)