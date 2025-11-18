#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int i = b; i >= a; i--) {
        printf("%d ", i);
    }
    
    return 0;
}
/*
B to A

Program Description
You will be given two values A and B respectively. Print all thenumbers from B to A (Both inclusive)
It is guaranteed that B >= A.

Input Format
A single line input containing two space separated integers.

Output Format
Print output according to the discription.

Constraints
B<=104

Input-1
1 10


Output-1
10 9 8 7 6 5 4 3 2 1  


Input-2
17 23


Output-2
23 22 21 20 19 18 16 17


Input-3
17 23


Output-3
231 230 229 228 227 226 225 224 223 222 221 220 219 218 217 216 215 214 213 212 211 210 209 208 207 206 205 204 203 202 201 200 199 198 197 196 195 194 193 192 191 190 189 188 187 186 185 184 183 182 181 180 179 178 177 176 175 174 173 172 171 170 169 168 167 166 165 164 163 162 161 160 159 158 157 156 155 154 153 152 151 150 149 148 147 146 145 144 143 142 141 140 139 138 137 136 135 134 133 132 131 130 129 128 127 126 125 124 123


Input-4
1234 1234


Output-4
1234
*/
