/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsSettingsCell.h>
#import <Messenger/FBMPaymentsTransactionHistoryRowCell.h>

@class FBNetworkImageView, UIImageView, FBFourRoundedCornerView, UILabel, NSString, FBPaymentsPeerToPeerContactsService, MNCDNProfileImageDownloader;

@interface FBPaymentsPeerToPeerTransferCell : FBPaymentsSettingsCell <FBMPaymentsTransactionHistoryRowCell> {

	FBNetworkImageView* _profilePictureImageView;
	UIImageView* _profilePictureMaskView;
	FBFourRoundedCornerView* _cornerView;
	UILabel* _displayNameLabel;
	UILabel* _statusAndDateLabel;
	UILabel* _currencyAmountLabel;
	BOOL _shouldBecomeHighlighted;
	BOOL _shouldBecomeSelected;
	BOOL _isMessengerUser;
	NSString* _userFBID;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	MNCDNProfileImageDownloader* _profileImageDownloader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightWithRowViewModel:(id)arg1 tableSize:(CGSize)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 imageDownloader:(id)arg2 profileImageDownloader:(id)arg3 contactsService:(id)arg4 ;
-(void)configureWithRowViewModel:(id)arg1 ;
-(void)willBeginDisplayWithRowViewModel:(id)arg1 ;
-(void)didEndDisplay;
-(void)_updateHighlightedAndSelectedStates;
-(void)_updateBackgroundColorWithColor:(id)arg1 ;
-(void)_updateImageAndDisplayNameForViewModel:(id)arg1 ;
-(void)_updatePlaceholderImageForViewModel:(id)arg1 ;
-(void)_updateProfilePictureAndDisplayNameWithUser:(id)arg1 withViewModel:(id)arg2 ;
-(void)_updateMaskForUser:(id)arg1 viewModel:(id)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)configureWithViewModel:(id)arg1 ;
@end

