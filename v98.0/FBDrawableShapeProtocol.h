/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, NSArray, UIImage;


@protocol FBDrawableShapeProtocol <NSObject>
@property (nonatomic,copy) UIColor * color; 
@property (assign,nonatomic) CGRect rect; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) double rotation; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL filled; 
@property (nonatomic,copy) NSArray * dashedLinePattern; 
@property (nonatomic,retain) UIImage * image; 
@required
+(id)newWithRect:(CGRect)arg1 color:(id)arg2 lineWidth:(double)arg3 rotation:(double)arg4 filled:(BOOL)arg5 cornerRadius:(double)arg6 image:(id)arg7;
+(id)compositeImageWithBlock;
-(id)imageOfShapeWithSize:(CGSize)arg1;
-(id)bezierPathInRect:(CGRect)arg1;
-(BOOL)filled;
-(NSArray *)dashedLinePattern;
-(id)imageOfShapeWithSize:(CGSize)arg1 scale:(double)arg2;
-(void)setDashedLinePattern:(id)arg1;
-(void)setImage:(id)arg1;
-(void)setCornerRadius:(double)arg1;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1;
-(UIImage *)image;
-(double)cornerRadius;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1;
-(UIColor *)color;
-(void)setColor:(id)arg1;
-(void)setRotation:(double)arg1;
-(double)rotation;
-(void)setFilled:(BOOL)arg1;

@end

