/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASDisplayProperties <NSObject>
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double zPosition; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,retain) id contents; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double contentsScale; 
@property (assign,nonatomic) CATransform3D transform; 
@property (assign,nonatomic) CATransform3D sublayerTransform; 
@property (assign,nonatomic) BOOL needsDisplayOnBoundsChange; 
@property (nonatomic,retain) CGColorRef shadowColor; 
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (assign,nonatomic) double borderWidth; 
@property (assign,getter=isOpaque,nonatomic) BOOL opaque; 
@property (nonatomic,retain) CGColorRef borderColor; 
@property (nonatomic,retain) CGColorRef backgroundColor; 
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing; 
@property (assign,nonatomic) unsigned edgeAntialiasingMask; 
@required
-(void)setOpaque:(BOOL)arg1;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
-(void)setNeedsDisplay;
-(void)setBackgroundColor:(CGColorRef)arg1;
-(CGColorRef)backgroundColor;
-(void)setNeedsLayout;
-(void)setCornerRadius:(double)arg1;
-(void)setShadowColor:(CGColorRef)arg1;
-(void)setShadowOffset:(CGSize)arg1;
-(void)setTransform:(CATransform3D)arg1;
-(void)setPosition:(CGPoint)arg1;
-(CATransform3D)transform;
-(id)contents;
-(BOOL)isOpaque;
-(double)cornerRadius;
-(CGPoint)position;
-(BOOL)needsDisplayOnBoundsChange;
-(double)contentsScale;
-(void)setContentsScale:(double)arg1;
-(void)setContents:(id)arg1;
-(void)setSublayerTransform:(CATransform3D)arg1;
-(CGPoint)anchorPoint;
-(CGSize)shadowOffset;
-(void)setAnchorPoint:(CGPoint)arg1;
-(CGColorRef)shadowColor;
-(void)setBorderWidth:(double)arg1;
-(void)setBorderColor:(CGColorRef)arg1;
-(void)setShadowRadius:(double)arg1;
-(void)setShadowOpacity:(double)arg1;
-(double)shadowRadius;
-(void)setZPosition:(double)arg1;
-(double)shadowOpacity;
-(void)setEdgeAntialiasingMask:(unsigned)arg1;
-(CGColorRef)borderColor;
-(double)borderWidth;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1;
-(CATransform3D)sublayerTransform;
-(unsigned)edgeAntialiasingMask;
-(double)zPosition;
-(BOOL)allowsEdgeAntialiasing;

@end
