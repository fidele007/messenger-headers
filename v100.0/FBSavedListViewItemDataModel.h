/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemTimelineAppCollectionItem;

@interface FBSavedListViewItemDataModel : NSObject {

	BOOL _inPostConsumeState;
	BOOL _isNotificationItem;
	FBMemTimelineAppCollectionItem* _item;

}

@property (nonatomic,retain) FBMemTimelineAppCollectionItem * item;              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL inPostConsumeState;                            //@synthesize inPostConsumeState=_inPostConsumeState - In the implementation block
@property (assign,nonatomic) BOOL isNotificationItem;                            //@synthesize isNotificationItem=_isNotificationItem - In the implementation block
-(void)setInPostConsumeState:(BOOL)arg1 ;
-(void)setIsNotificationItem:(BOOL)arg1 ;
-(BOOL)isNotificationItem;
-(BOOL)inPostConsumeState;
-(FBMemTimelineAppCollectionItem *)item;
-(void)setItem:(FBMemTimelineAppCollectionItem *)arg1 ;
@end
