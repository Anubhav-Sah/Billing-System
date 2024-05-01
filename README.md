# Billing-System
<h1>Restaurant Billing System in C</h1>

<p>A simple console-based restaurant billing system implemented in C. This project is designed to help users manage orders and generate invoices for a restaurant setting. The system allows for adding and deleting items, calculating total amounts, and printing detailed invoices with customer and transaction details, option to save it in local disk</p>

<h2>Purpose:</h2>
<p>This project serves as my first venture into building practical applications with C, focusing on fundamental programming concepts such as data structures (doubly linked lists), control structures, file handaling,and basic input/output operations.</p>

<h2>Features:</h2>

<p>
<ul>
<li> Add Item: Input the item name, rate, and quantity to add an item to the bill.
<li> Delete Item: Remove the last item added to the bill.
<li> Print Invoice: Outputs a detailed invoice which includes:
   <ul>
    <li> Customer name and address
    <li> Itemized list of purchases
    <li> Total amount due, cash given, and cash returned
    </ul>
<li>save invoice: Outputs a detailed invoice which includes:
    <ul>
    <li> Customer name and address
    <li> Itemized list of purchases
    <li> Total amount due, cash given, and cash returned
    </ul>
</ul>
</p><br>

<h2>Functions</h2>
<p>
<ul>
<li>add_a_item(): Adds a new item to the list.
<li>delete_a_item(): Removes the most recently added item from the list.
<li>content(): Displays the current list of items.
<li>header(): Prepares the invoice header.
<li> footer(): Finalizes the invoice with totals and acknowledgements.
<li>print_invoice():Save the current link of item in .txt file.
</p>
<h3>Example Usage</h3>
<p>
<li> Start the program.
<li> Choose option 1 to add an item, and enter the item details.
<li> Repeat step 2 to add more items.
<li> Choose option 2 if you need to delete the last item.
<li> Select option 3 to print the invoice, enter customer details, and conclude the transaction without saving it locally.
<li> Select option 4 to print the invoice, enter customer details, and conclude the transaction and saving it locally in txt file.
</ul>
</p>

<br>
<h3><b>Author:</b></h3><p>Anubhav Kumar<p> 
