#include<bits/stdc++.h>
using namespace std;

bool white_wins(int rowW,int colW,int rowB,int colB)
{
    while(1)
    {
        if(colW==colB && rowB==rowW+1)
            return true;
        if(rowW!=8)
        {

            // If white pawn can kill black pawn
            // White wins
            if (rowB == rowW + 1
                && (colB == colW - 1 || colB == colW + 1))
                return true;
            else
                rowW++;
        }
        else return false;
         if(colW==colB && rowB==rowW+1)
            return false;

        if(rowB!=1)
        {
            // If black pawn can kill white pawn
            // White loses
            if (rowB == rowW + 1
                && (colB == colW - 1 || colB == colW + 1))
                return false;
            else
                rowB--;
        }
        else return true;

    }
}

int main()
{
    int rowW,colW,rowB,colB;
    cin>>rowW>>colW>>rowB>>colB;

    if(white_wins(rowW,colW,rowB,colB))
        cout<<"White"<<"\n";
    else
        cout<<"Black"<<"\n";
}
