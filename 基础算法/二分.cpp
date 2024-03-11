'''
  二分的目的主要是 求大于等于x的第一个数字   或者求小于等于x的最后一个数
  '''


int SL(int q[],int l, int r,int x){  //求左边界，或者理解为求小于等于x的最后一个数
    while(l<r){
        int mid =  l+r >>1; //中间
        if(q[mid]>=x) r = mid;  //更新右边界
        else l =mid+1;  //更新左边界

    }

    return r;
}

int SR(int q[],int l, int r,int x){  //求右边界，或者理解为求大于x的第一个数
    while(l<r){
        int mid =  l+r >>1;
        if(q[mid]>x) r = mid;
        else l =mid+1;

    }

    return r;
}

