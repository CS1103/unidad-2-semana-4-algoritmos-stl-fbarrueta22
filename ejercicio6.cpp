#include <stdio.h>
#include<iostream>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, i;
        long long arr[] = {}, v, ans = 0;
        char str[10001];
        scanf("%d ", &n);
        while(n--) {
            fgets(str,10001,stdin);
            //copia el valor de la letra
            sscanf(str+2, "%lld", &v);
            //arr[letra]= valor de la letra
            arr[str[0]] = v;
        }
        scanf("%d ", &n);
        while(n--) {
            fgets(str,10001,stdin);
            for(i = 0; str[i]; i++)
            //str[i] son cada letra, y arr[str[i]] te da el valor de cada letra y lo sumas
            //suma todos los valores
                ans += arr[str[i]];
        }

        printf("%lld.%02lld$\n", ans/100, ans%100);
    }
    return 0;
}
