#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class HotelRoom
{   public:
       HotelRoom(int bedrooms, int bathrooms):bedrooms_(bedrooms), bathrooms_(bathrooms){}

       virtual ~HotelRoom()
       {}

       virtual int get_price()
       {
           return 50*bedrooms_+100*bathrooms_;
       }

    private:
        int bedrooms_,bathrooms_;
};
class HotelAppartment:public HotelRoom
{
    public:
        HotelAppartment(int bedrooms, int bathrooms):HotelRoom(bedrooms, bathrooms) {}

        virtual ~HotelAppartment()
        {}

        virtual int get_price() override
        {
            return HotelRoom::get_price()+100;
        }
};
int main()
{
    int n;
    cin >> n;
    vector<HotelRoom*> rooms;
    for(int i=0; i<n; i++)
    {
        string room_type;
        int bedrooms,bathrooms;
        cin >> room_type >> bedrooms >> bathrooms;
        if(room_type == "standard")
        {
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));

        }
        else
        {
            rooms.push_back(new HotelAppartment(bedrooms, bathrooms));
        }
    }
    int profit=0;
    for(auto room:rooms)
    {
        profit += room->get_price();
    }
    cout << profit << endl;
    for(auto room:rooms)
    {
        delete room;
    }
    rooms.clear();
    return 0;
}