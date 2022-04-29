C07-Vectors-Exclusive-Union

Assume v1 and v2 are vectors holding integer values (vector<int>). As an example, consider
    vector<int> v1 { 44, 22, 33, 11, };
    vector<int> v2 { 22, 33, 77 };
You are asked to write the function 
vector<int> exclusiveUnion(vector<int> v1, vector<int> v2);
to calculate the result of the exclusive union of the incoming vectors v1 and v2. 
The function must return a vector<int> holding the solution.

The exclusive union of the vectors v1 and v2 is the combination of values that exclusively belong to v1 and v2, respectively. 
Observe that common elements of v1 and v2 are not included in the result.

For example, in the sample above, 22 and 33 are common to v1 and v2. Hence, they will not be part of the answer. 
On the other hand, observe that the values 44 and 11 are exclusively found in v1 but not in v2. 
Consequently, 44 and 11 will appear in the result. Finally, 77 is an exclusive value of v2, and we will include it in the answer. 
Therefore, for this sample, the function will return a solution vector holding {44, 11, 77}.
