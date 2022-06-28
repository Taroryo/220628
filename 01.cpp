#define rep(i,s,g) for(i=s;i<g;i++)
int Count(int* A, int S)
{
    int count = 0;
    int i;
    rep(i,0,S) {
        if( *(A+i)%2 == 0 ){ *(A+i) = *(A+i) - 1; count++; }
    }
    return count;
}
