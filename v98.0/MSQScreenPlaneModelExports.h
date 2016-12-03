/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(double)verticalSpacing;
-(double)horizontalSpacing;
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

