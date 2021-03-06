/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNFoldableAdminMessageView.h>

@protocol MNFoldableAdminMessageViewDelegate, MNMessageCollapsingGroupViewDelegate;
@class FBRichTextView, FBMMessageKey, NSString;

@interface MNMessageCollapsingGroupView : UIControl <MNFoldableAdminMessageView> {

	FBRichTextView* _label;
	id _viewModel;
	id<MNFoldableAdminMessageViewDelegate> _foldDelegate;
	long long _viewState;
	FBMMessageKey* _messageKey;
	id<MNMessageCollapsingGroupViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageCollapsingGroupViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNFoldableAdminMessageViewDelegate> foldDelegate;              //@synthesize foldDelegate=_foldDelegate - In the implementation block
@property (nonatomic,copy) id viewModel;                                                              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) long long viewState;                                                   //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,copy) FBMMessageKey * messageKey;                                                //@synthesize messageKey=_messageKey - In the implementation block
+(double)heightThatFitsWithViewModel:(id)arg1 maxWidth:(double)arg2 viewState:(long long)arg3 ;
-(void)setViewState:(long long)arg1 animated:(BOOL)arg2 ;
-(FBMMessageKey *)messageKey;
-(void)setFoldDelegate:(id<MNFoldableAdminMessageViewDelegate>)arg1 ;
-(void)setMessageKey:(FBMMessageKey *)arg1 ;
-(void)_didTap;
-(id<MNFoldableAdminMessageViewDelegate>)foldDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMessageCollapsingGroupViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMessageCollapsingGroupViewDelegate>)delegate;
-(void)prepareForReuse;
-(long long)viewState;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

