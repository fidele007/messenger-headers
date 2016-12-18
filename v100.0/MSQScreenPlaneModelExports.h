/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSQScreenPlaneModelExports <JSExport>
@property (assign,nonatomic) unsigned long long verticalAlignment; 
@property (assign,nonatomic) unsigned long long horizontalAlignment; 
@property (assign,nonatomic) double verticalSpacing; 
@property (assign,nonatomic) double horizontalSpacing; 
@property (assign,nonatomic) double textureWidth; 
@property (assign,nonatomic) double textureHeight; 
@property (assign,nonatomic) BOOL equalToScreenWidth; 
@property (assign,nonatomic) BOOL equalToScreenHeight; 
@required
-(double)horizontalSpacing;
-(double)verticalSpacing;
-(void)setVerticalSpacing:(double)arg1;
-(void)setHorizontalSpacing:(double)arg1;
-(double)textureWidth;
-(void)setTextureWidth:(double)arg1;
-(double)textureHeight;
-(void)setTextureHeight:(double)arg1;
-(BOOL)equalToScreenWidth;
-(void)setEqualToScreenWidth:(BOOL)arg1;
-(BOOL)equalToScreenHeight;
-(void)setEqualToScreenHeight:(BOOL)arg1;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(void)setHorizontalAlignment:(unsigned long long)arg1;
-(void)setVerticalAlignment:(unsigned long long)arg1;

@end
