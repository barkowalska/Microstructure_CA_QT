# p r a g m a   o n c e 
 # i n c l u d e   " B a s i c _ D a t a t y p e s . h " 
 # i n c l u d e   < c m a t h > 
 
 c l a s s   N e i g h b o u r s 
 { 
 p u b l i c : 
         / * 
                 Z w r a c a   p o z y c j ��  s ��s i a d a   w   s t o s u n k u   d o   k o m ��r k i   { x , y , z } 
         * / 
         v i r t u a l   v e c   g e t N e x t ( )   =   0 ; 
         v i r t u a l   ~ N e i g h b o u r s ( )   =   d e f a u l t ; 
 } ; 
 
 / * s ��s i e d z t w o   M o o r e * / 
 c l a s s   M o o r e : p u b l i c   N e i g h b o u r s 
 { 
 p r i v a t e : 
         v e c   p o s [ 2 7 ] ; 
 p u b l i c : 
         v e c   g e t N e x t ( )   o v e r r i d e ; 
         M o o r e ( ) ; 
 } ; 
 
 / * s ��s i e d z t w o   V o n   N e u m a n n * / 
 c l a s s   V o n N e u m a n n   : p u b l i c   N e i g h b o u r s 
 { 
 p r i v a t e : 
         v e c   p o s [ 7 ] ; 
 p u b l i c : 
         v e c   g e t N e x t ( )   o v e r r i d e ; 
         V o n N e u m a n n ( ) ; 
 } ; 
 
 / * L o s o w e   s ��s i e d z t w o   p e n t a g o n a l n e * / 
 c l a s s   R a n d o m   : p u b l i c   N e i g h b o u r s 
 { 
 p r i v a t e : 
         v e c   p o s [ 2 7 ] ; 
 p u b l i c : 
         v e c   g e t N e x t ( )   o v e r r i d e ; 
         R a n d o m ( ) ; 
 } ; 
 