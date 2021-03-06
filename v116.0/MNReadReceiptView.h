/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBMConfigurable.h>

@class MNMessageRow, UILabel, MNReadReceiptDisplayController, NSString;

@interface MNReadReceiptView : UIView <FBMConfigurable> {

	MNMessageRow* _messageRow;
	UILabel* _readLabel;
	MNReadReceiptDisplayController* _readReceiptDisplayController;

}

@property (nonatomic,retain) UILabel * readLabel;                                                        //@synthesize readLabel=_readLabel - In the implementation block
@property (nonatomic,retain) MNReadReceiptDisplayController * readReceiptDisplayController;              //@synthesize readReceiptDisplayController=_readReceiptDisplayController - In the implementation block
@property (nonatomic,retain) MNMessageRow * messageRow;                                                  //@synthesize messageRow=_messageRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNReadReceiptDisplayController *)readReceiptDisplayController;
-(void)configureWithReadReceiptDisplayController:(id)arg1 ;
-(void)setReadReceiptDisplayController:(MNReadReceiptDisplayController *)arg1 ;
-(void)_updateReceiptInfo;
-(UILabel *)readLabel;
-(void)setReadLabel:(UILabel *)arg1 ;
-(MNMessageRow *)messageRow;
-(void)setMessageRow:(MNMessageRow *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isConfigured;
@end

