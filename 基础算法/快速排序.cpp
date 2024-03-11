void quick_sort(int q[],int l ,int r){
    if(l>=r) return;        //左边界>=右边界，显然数组长度为0或者1
    int i = l-1, j =r+1,x = q[r+l >>1];  //注意i和j要越过边界
    while(i<j){
        do i++;while(q[i]<x);    //指针移动
        do j-- ;while(q[j]>x);
        if(i<j){
            swap(q[i],q[j]);     //交换
        }

    }
    quick_sort(q,l,j);      //递归左半部分，注意用j否则边界问题
    quick_sort(q,j+1,r);    //递归右半部分
}



