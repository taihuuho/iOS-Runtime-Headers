/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTitleSubtitleUILabelTile : NSObject <PXUIViewBasicTile> {
    int  __animationCount;
    PXTitleSubtitleUILabel * _label;
    BOOL  _rendersTextAsynchronously;
    PXTitleSubtitleLabelSpec * _spec;
    NSString * _subtitle;
    NSString * _title;
    UIView * _view;
}

@property (setter=_setAnimationCount:, nonatomic) int _animationCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float lastBaseline;
@property (nonatomic) BOOL rendersTextAsynchronously;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (int)_animationCount;
- (void)_setAnimationCount:(int)arg1;
- (void)_updateLabelTitleAndSubtitle;
- (void)becomeReusable;
- (void)didAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; float x6; BOOL x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; float x6; BOOL x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)init;
- (float)lastBaseline;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)prepareForReuse;
- (BOOL)rendersTextAsynchronously;
- (void)setRendersTextAsynchronously:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)view;
- (void)willAnimateToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; float x6; BOOL x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 toUserData:(id)arg2 withOptions:(id)arg3;

@end
