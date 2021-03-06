/* Generated by RuntimeBrowser.
 */

@protocol _UIWebRotationDelegate

@required

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })activeRectForRectOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)considerHeightOfRectOfInterestForRotation;
- (UIView *)contentView;
- (float)currentDocumentScale;
- (UIScrollView *)enclosingScrollView;
- (float)heightToKeepVisible;
- (float)minimumScaleForSize:(struct CGSize { float x1; float x2; })arg1;
- (float)minimumVerticalContentOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfInterestForRotation;
- (struct { float x1; float x2; float x3; })scalesForContainerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)updateBoundariesOfScrollView:(UIScrollView *)arg1 withScales:(struct { float x1; float x2; float x3; })arg2;
- (float)zoomedDocumentScale;

@optional

- (struct CGSize { float x1; float x2; })contentSizeForScrollView:(UIScrollView *)arg1;
- (float)scaleForProposedNewScale:(float)arg1 andOldScale:(float)arg2;

@end
