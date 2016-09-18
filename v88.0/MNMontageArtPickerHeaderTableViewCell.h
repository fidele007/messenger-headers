/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageArtPickerBaseTableViewCell.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNMontageArtPickerHeaderTableViewCellDelegate;
@class UILabel, UIButton, NSString;

@interface MNMontageArtPickerHeaderTableViewCell : MNMontageArtPickerBaseTableViewCell <FBClassProvidable> {

	UILabel* _label;
	UIButton* _seeAllButton;
	id<MNMontageArtPickerHeaderTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageArtPickerHeaderTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setupWithModel:(id)arg1 viewState:(id)arg2 ;
-(void)_didTapSeeAllButton;
-(void)setDelegate:(id<MNMontageArtPickerHeaderTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id<MNMontageArtPickerHeaderTableViewCellDelegate>)delegate;
@end
