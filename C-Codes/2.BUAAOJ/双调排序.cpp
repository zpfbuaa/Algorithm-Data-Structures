 #include<iostream>
 #include<iterator>
 using namespace std;

class bitonic_sorter{
    public:
        bitonic_sorter(int a[], int len);
        void  sort(bool dir=true);
        void  sort_for_arbitray_length(bool dir=true);
    private:
        int* array;
        int length;
        void bitonic_sort(int lowbundary, int len,bool direction );
        void bitonic_sort_for_arbitrary_length(int lowbundary,int len,bool direction);
        void bitonic_merge(int lowbundary,int len,bool direction);
        void bitonic_merge_for_arbitrary_length(int lowbundary,int len,bool direction);
        void compare_and_swap(int i,int j,bool direction);
        int greatest_power_of_2_lessthan(int len);
 };
bitonic_sorter::bitonic_sorter(int a[],int len){
    array=a;
    length=len;
}
void bitonic_sorter::sort(bool direction){
    bitonic_sort(0,length,direction);
}
void bitonic_sorter::sort_for_arbitray_length(bool direction){
    bitonic_sort_for_arbitrary_length(0,length,direction);
}
void bitonic_sorter::bitonic_sort(int lowbundary,int len,bool direction){
    if(len>1){
        int m=len/2;
        bitonic_sort(lowbundary,m,direction);
        bitonic_sort(lowbundary+m,m,!direction);
        bitonic_merge(lowbundary,len,direction);
    }
}
void bitonic_sorter::bitonic_sort_for_arbitrary_length(int lowbundary,int len,bool direction){
    if(len>1){
        int m=len/2;
        if(direction==true){
            bitonic_sort(lowbundary,m,!direction);
            bitonic_sort(lowbundary+m,len-m,direction);
            bitonic_merge_for_arbitrary_length(lowbundary,len,direction);
        }
        else{
            int half=greatest_power_of_2_lessthan(len);
            bitonic_sort(lowbundary,len-half,!direction);
            bitonic_sort(lowbundary+len-half,half,direction);
            bitonic_merge_for_arbitrary_length(lowbundary,len,direction);
        }
    }
}
void bitonic_sorter::bitonic_merge(int lowbundary,int len,bool direction){
   if(len>1){
     int m=len/2;
     for(int i=lowbundary;i<lowbundary+m;i++){
       compare_and_swap(i,i+m,direction);
     }
     bitonic_merge(lowbundary,m,direction);
     bitonic_merge(lowbundary+m,m,direction);
    }
}
void bitonic_sorter::bitonic_merge_for_arbitrary_length(int lowbundary,int len,bool direction){
    if(len>1){
        int m=greatest_power_of_2_lessthan(len);
        for(int i=lowbundary;i<lowbundary+len-m;i++){
        compare_and_swap(i,i+m,direction);
    }
        bitonic_merge(lowbundary,m,direction);
        bitonic_merge(lowbundary+m,len-m,direction);
    }
}
void bitonic_sorter::compare_and_swap(int i, int j,bool direction){
    if(direction==(array[i]>array[j])){
        swap(array[i],array[j]);
    }
}
int bitonic_sorter::greatest_power_of_2_lessthan(int len){
    int p=1;
    while(p<len) p=p<<1;
    return p>>1;
}
int main(int args, char** argv){
    int num_1[8]={3,67,3,5,8,4,7,9};
    int num_2[10]={7,5,8,3,5,78,9,5,6,23};
    bitonic_sorter sorter_1(num_1,8);
    bitonic_sorter sorter_2(num_2,10);
    //对2^n个数进行排序
    //升序排列
    sorter_1.sort(true);
    copy(num_1,num_1+8,ostream_iterator<int>(cout," "));
    cout<<"\n";
    //降序排列
    sorter_1.sort(false);
    copy(num_1,num_1+8,ostream_iterator<int>(cout," "));
    cout<<"\n";
    //对任意个数进行排序
    //升序排列
    sorter_2.sort_for_arbitray_length(true);
    copy(num_2,num_2+10,ostream_iterator<int>(cout," "));
    cout<<"\n";
    //降序排列
    sorter_2.sort_for_arbitray_length(false);
    copy(num_2,num_2+10,ostream_iterator<int>(cout," "));
    cout<<"\n";
}
