/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ESDContainer, ESDObject;



@interface PptHyperlinkBlock : NSObject 
{
    ESDContainer *mInteractiveInfoContainerHolder;
    ESDObject *mTxInteractiveInfoAtomHolder;
}


- (void)setInteractiveInfoContainerHolder:(id)arg1;
- (void)setTxInteractiveInfoAtomHolder:(id)arg1;
- (id)interactiveInfoContainerHolder;
- (struct PptTxInteracInfoAtom { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; NSInteger x7; NSInteger x8; }*)txtInteractiveInfoAtom;
     /* Encoded args for previous method: ^{PptTxInteracInfoAtom=^^?S{EshHeader=iIsSC}^^?iBii}8@0:4 */


@end