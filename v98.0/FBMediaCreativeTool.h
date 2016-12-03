/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBMediaCreativeToolbar, UIView;


@protocol FBMediaCreativeTool <NSObject>
@property (nonatomic,copy,readonly) NSString * creativeToolTitle; 
@property (nonatomic,readonly) unsigned long long glyphName; 
@property (nonatomic,readonly) unsigned long long glyphSize; 
@property (nonatomic,readonly) FBMediaCreativeToolbar * creativeToolbar; 
@property (nonatomic,readonly) UIView * creativeToolTrayView; 
@property (nonatomic,readonly) UIView * videoPreviewContentView; 
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolDelegate> creativeToolDelegate; 
@property (assign,nonatomic) BOOL translucent; 
@optional
-(void)setTranslucent:(BOOL)arg1;
-(BOOL)translucent;

@required
+(id)creativeToolKey;
-(UIView *)videoPreviewContentView;
-(NSString *)creativeToolTitle;
-(unsigned long long)glyphSize;
-(id<FBMediaCreativeToolDelegate>)creativeToolDelegate;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(void)setCreativeToolDelegate:(id)arg1;
-(unsigned long long)glyphName;

@end

