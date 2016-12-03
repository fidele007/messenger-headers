/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBMMessageKey;


@protocol MNFoldableAdminMessageView <NSObject>
@property (assign,nonatomic,__weak) id<MNFoldableAdminMessageViewDelegate> foldDelegate; 
@property (nonatomic,copy) id viewModel; 
@property (nonatomic,readonly) long long viewState; 
@property (nonatomic,copy) FBMMessageKey * messageKey; 
@required
+(double)heightThatFitsWithViewModel:(id)arg1 maxWidth:(double)arg2 viewState:(long long)arg3;
-(void)setViewState:(long long)arg1 animated:(BOOL)arg2;
-(FBMMessageKey *)messageKey;
-(void)setFoldDelegate:(id)arg1;
-(void)setMessageKey:(id)arg1;
-(id<MNFoldableAdminMessageViewDelegate>)foldDelegate;
-(void)prepareForReuse;
-(long long)viewState;
-(id)viewModel;
-(void)setViewModel:(id)arg1;

@end

