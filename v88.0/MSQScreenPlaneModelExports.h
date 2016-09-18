/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(void)setEqualToScreenWidth:(BOOL)arg1;
-(void)setEqualToScreenHeight:(BOOL)arg1;
-(BOOL)equalToScreenWidth;
-(BOOL)equalToScreenHeight;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(void)setHorizontalAlignment:(unsigned long long)arg1;
-(void)setVerticalAlignment:(unsigned long long)arg1;

@end
