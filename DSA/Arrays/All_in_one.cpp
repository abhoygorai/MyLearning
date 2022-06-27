#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    int *p;
    int length;

    Array()
    {
        length = 10;
        p= new int[length];
    }

    Array(int l)
    {
        length = l;
        p = new int[l];
    }

    void Input()
    {
        cout<<"Enter the elements of the array "<<endl;
        for (int i = 0; i < length; i++)
        {
            cin>>p[i];
        }
        
    }

    void Display()
    {
        cout<<"\nThe elements are ---"<<endl;
        for(int i=0; i<length; i++)
        {
            cout<<p[i]<<endl;
        }
    }

    void Display2()
    {
        cout<<"\nThe elements are ---"<<endl;
        for(int i=0; i<length; i++)
        {
            cout<<p[i]<<"  ";
        }
        cout<<endl;
    }

    void Append(int key)
    {
        p[length] = key;
        length++;
    }

    void Insert(int index, int key)
    {
        int i=length;
        while(i>index)
        {
            p[i] = p[i-1];
            i--;
        }
        p[index]=key;
        length++;
    }
    void Delete(int index)
    {
        int i=index;
        while(i < length - 1)
        {
            p[i] = p[i+1];
            i++;
        }
        length--;
    }
    void Swap(int l1, int l2)
    {
        int temp = p[l1];
        p[l1]=p[l2];
        p[l2]=temp;
    }
    int LinearSearch(int key)
    {
        for(int i=0; i<length; i++)
        {
            if(p[i] == key)
            {
                return i;
                break;
            }
        }
            return -1;
    }
    int BinSearch(int key)
    {
        int h=length-1, l=0;
        int mid=(l+h)/2;
        while(l<h)
        {
            if(p[mid] == key)
            {
                return mid;
                break;
            }
            else if(p[mid] > key)
            {
                h=mid-1;
                mid=(l+h)/2;
            }
            else
            {
                l=mid+1;
                mid=(l+h)/2;
            }    
        }
        return -1;
    }
    int get(int index)
    {
        return p[index];
    }
    int max()
    {
        int max=p[0];
        for(int i=1; i<length-1; i++)
        {
            if(p[i] > max)
                max=p[i];
        }
        return max;
    }
    int min()
    {
        int min=p[0];
        for(int i=0; i<length-1; i++)
        {
            if(p[i]<min)
            {
                min=p[i];
            }
        }
        return min;
    }
    int sum()
    {
        int sum=0;
        for(int i = 0; i<length-1; i++)
        {
            sum+=p[i];
        }
        return sum;
    }
    float Avg()
    {
        int sum=0;
        for(int i = 0; i<length-1; i++)
        {
            sum+=p[i];
        }
        return (sum/length);
    }
    void Reverse()
    {
        int temp, i=0, j=length-1;
        while(i<=j)
        {
            temp = p[i];
            p[i]=p[j];
            p[j]=temp;
            i++;j--;
        }
    }
    void Merge(Array a)
    {
        int h=0;
        int *q= new int[length + a.length];
        for(int i=0; i<length; i++)
        {
            q[h]=p[i];
            h++;
        }
        for(int i=0; i<a.length; i++)
        {
            q[h]=a.p[i];
            h++;
        }
        p=q;
        length=h;
    }
    void Union(Array a)
    {
        int *q= new int[length + a.length];
        int i=0, h=0, k=0;
        while(i<length && h<a.length)
        {
            if(p[i]<a.p[h])
            {
                q[k]=p[i];
                k++;i++;
            }
            else if(p[i]>a.p[h])
            {
                q[k]=a.p[h];
                k++;h++;
            }
            else
            {
                i++;h++;k++;
            }
        }
        p=q;
        length=k;
    }
    void Intersection(Array a)
    {
        int *q = new int[length + a.length];
        int k = 0;
        for(int i =0; i<length; i++)
        {
            for (int j = 0; j < a.length; j++)
            {
                if(p[i] == a.p[j])
                    q[k++] = p[i];
            }
        }
        q = p;
        length = k;
    }


};

int main()
{
    cout<<endl<<"This is an ALL IN ONE program of ARRAY"<<endl;
    system("pause");

    int indi = 1;

    cout<<"\nEnter the size of the array: ";
    int s, index, key, temp;
    cin>>s;
    Array a1(s), a2(1);
    a1.Input();
    cout<<endl<<"Array is created"<<endl;
    
    do
    {
        cout<<endl<<"Enter 1 for Display the Array"<<endl;
        cout<<"Enter 2 for Display in a single line"<<endl;
        cout<<"Enter 3 for Append in the Array"<<endl;
        cout<<"Enter 4 for Insert in the Array"<<endl;
        cout<<"Enter 5 for Delete in the Array"<<endl;
        cout<<"Enter 6 for Linear search in the Array"<<endl;
        cout<<"Enter 7 for Binary Search in the Array"<<endl;
        cout<<"Enter 8 for Get from the Array"<<endl;
        cout<<"Enter 9 for Max element in the Array"<<endl;
        cout<<"Enter 10 for Min element in the Array"<<endl;
        cout<<"Enter 11 for Sum of elements in the Array"<<endl;
        cout<<"Enter 12 for Average of elements in the Array"<<endl;
        cout<<"Enter 13 for Reverse the Array"<<endl;
        cout<<"Enter 14 for Merge the Array"<<endl;
        cout<<"Enter 15 for Union the Array"<<endl;
        cout<<"Enter 16 for Intersection the Array"<<endl;
        cout<<"Enter 100 for ending the program"<<endl<<endl;

        cout<<"Enter your choice: ";
        cin>>indi;

        switch (indi)
        {
        case 1:
            a1.Display();
            break;
        case 2:
            a1.Display2();
            break;
        case 3:
            cout<<"Enter the number you want to append: ";
            int temp;
            cin>>temp;
            a1.Append(temp);
            cout<<"Append done"<<endl;
            break;

        case 4:
            cout<<"Enter the index: ";
            cin>>index;
            cout<<"Enter the number: ";
            cin>>key;
            a1.Insert(index, key);
            cout<<"Insertion is done"<<endl;
            break;
        
        case 5:
            cout<<"Enter the index: ";
            cin>>index;
            a1.Delete(index);
            cout<<"Deleted"<<endl;
            break;
        
        case 6:
            cout<<"Enter the number: ";
            cin>>key;
            cout<<"The number is in "<<a1.BinSearch(key)<<" index"<<endl;
            break;
        
        case 7:
            cout<<"Enter the number: ";
            cin>>key;
            cout<<"The number is in "<<a1.LinearSearch(key)<<" index"<<endl;
            break;

        case 8:
            cout<<"Enter the index: ";
            cin>>index;
            a1.get(index);
            break;
        
        case 9:
            cout<<"The max element is "<<a1.max()<<endl;
            break;

        case 10:
            cout<<"The min element is: "<<a1.min()<<endl;
            break;
        case 11:
            cout<<"The sum of the array is: "<<a1.sum()<<endl;
            break;

        case 12:
            cout<<"The average is: "<<a1.Avg()<<endl;
            break;
        
        case 13:
            a1.Reverse();
            cout<<"The array is reversed."<<endl;
            break;
        case 14:
            cout<<"Enter the size of second array."<<endl;
            cin>>temp;
            a2.length = temp;
            cout<<"Enter the elemets of second array."<<endl;
            a2.Input();
            a1.Merge(a2);
            cout<<"Array merged"<<endl;
            break;
        case 15:
            cout<<"Enter the size of second array."<<endl;
            cin>>temp;
            a2.length = temp;
            cout<<"Enter the elemets of second array."<<endl;
            a2.Input();
            a1.Union(a2);
            cout<<"Union done"<<endl;
            break;
        case 16:
            cout<<"Enter the size of second array."<<endl;
            cin>>temp;
            a2.length = temp;
            cout<<"Enter the elemets of second array."<<endl;
            a2.Input();
            a1.Intersection(a2);
            cout<<"Intersection done"<<endl;
            break;
        case 100:
            cout<<endl<<"Program ended"<<endl;
            exit(0);
        default:
            cout<<"Invalid Entry"<<endl<<endl;
        break;
        
        }

    }while(indi!=100);


    return 0;
}