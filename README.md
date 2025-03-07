<h1>QuickSort</h1>
<p>
  &nbsp; The QuickSort algorithm starts its execution by choosing one pivot
  element, after that it partitions the main array in two subarrays: one
  containing the slmaller or equal elements to the pivot and another containing
  greater elements. The algorithm works recusivily until each partition contains
  one or zero elements, ensure the entire array is sorted.
</p>
<h3>Advantages</h3>
<ul>
  <li>It's faster in large arrays</li>
  <li>In-place - It requires little memory usage</li>
  <li>It has a medium complexity space of O(n log n)</li>

</ul>
<h3>Disadvantage</h3>
<ul>
    <li>If choosed a bad pivot, It will incriase the time execution</li>
    <li>It may has a bad execution time when the array is partialy sorted</li>
    <li>It's not stable</li>
</ul>
<h3>Comparson of Execution Time</h3>
<p>
    &nbsp; The QuickSort algorithm has a time complexity of O(n log n) in the average case, but in the worst case it has a time complexity equals a O(n^2).
    <br>
</p>
<img src="https://github.com/user-attachments/assets/b43aded7-8593-463e-b54f-cdd5b286bbe1" alt="Comparation Execution Time" />
