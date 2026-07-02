namespace Lab_6
{
    class CartItem
    {
        public int Id;
        public string Name;
        public int Quantity;
        public double Price;
        public int Discount;
        public double TotalPrice;


        public CartItem(int id, string name, int qty, double price, int dis)
        {
            this.Id = id;
            this.Name = name;
            this.Quantity = qty;
            this.Price = price;
            this.Discount = dis;
            this.TotalPrice = (price * qty) - (price * qty * dis / 100);
        }
    }
}
