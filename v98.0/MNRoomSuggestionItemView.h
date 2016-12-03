/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNRoomSuggestionCardViewDelegate.h>
#import <Messenger/MNFacepileConfigurable.h>

@protocol MNRoomSuggestionItemViewDelegate;
@class MNRoomSuggestionCardView, MNRoomSuggestionItemContentView, MNProfileImageView, MNRoomSuggestionRow, NSString;

@interface MNRoomSuggestionItemView : UIView <MNRoomSuggestionCardViewDelegate, MNFacepileConfigurable> {

	MNRoomSuggestionCardView* _cardView;
	MNRoomSuggestionItemContentView* _contentView;
	id<MNRoomSuggestionItemViewDelegate> _delegate;
	MNProfileImageView* _profileImageView;
	MNRoomSuggestionRow* _roomSuggestionRow;

}

@property (assign,nonatomic,__weak) id<MNRoomSuggestionItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * profileImageView;                           //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,copy) MNRoomSuggestionRow * roomSuggestionRow;                             //@synthesize roomSuggestionRow=_roomSuggestionRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNProfileImageView *)profileImageView;
-(id)facepileImageViews;
-(void)setFacepileImageModels:(id)arg1 ;
-(void)roomSuggestionCardViewDidTapActionButton:(id)arg1 ;
-(void)setRoomSuggestionRow:(MNRoomSuggestionRow *)arg1 ;
-(MNRoomSuggestionRow *)roomSuggestionRow;
-(void)_updateContentViewModel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNRoomSuggestionItemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNRoomSuggestionItemViewDelegate>)delegate;
@end
