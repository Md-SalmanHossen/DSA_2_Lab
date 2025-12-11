#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

// Item structure definition
class Item{
   public:
   double weight,profit;
}; 

// Comparator function for sorting items by unit profit (descending)
bool comp(Item i1,Item i2){
   double unit_profit_i1=i1.profit/i1.weight;
   double unit_profit_i2=i2.profit/i2.weight;

   return unit_profit_i2 > unit_profit_i1; 
}

int main(){
   vector<double>weights={20, 30, 10};
   vector<double>profits={20, 30, 10};
   double max_cap=50;
   vector<Item>items;

   // Populate the items vector
   for (int i=0; i < weights.size(); i++){ 
      Item item;
      item.weight=weights[i];
      item.profit=profits[i]; 

      items.push_back(item);
   }
   cout << items[0].weight << endl; // Debug statement

   double max_profit = 0.0;
   
   // Sort by unit profit (descending)
   sort(items.begin(), items.end(), comp);
   cout << items[0].weight << endl; // Debug statement

   // Apply the Greedy strategy

   for(Item item: items){
      if(item.weight <= max_cap){
         max_cap -= item.weight;
         max_profit += item.profit; 
      } else {
         // We have to take fractional or part of the item
         double unit_profit = item.profit/item.weight;
         max_profit += unit_profit * max_cap;
         max_cap = 0;
      }
      
      if(max_cap == 0){
         break;
      }
   }
   
   cout << "Maximum Profit: " << max_profit << endl;

   return 0;
}