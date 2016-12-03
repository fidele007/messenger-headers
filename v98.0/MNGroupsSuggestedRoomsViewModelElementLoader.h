/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBatchedViewModelLoading.h>
#import <Messenger/MNBatchedViewModelIndividualKeysDataSource.h>

@protocol MNBatchedViewModelIndividualKeysToSubscribeUpdating;
@class NSOrderedSet, NSString;

@interface MNGroupsSuggestedRoomsViewModelElementLoader : NSObject <MNBatchedViewModelLoading, MNBatchedViewModelIndividualKeysDataSource> {

	NSOrderedSet* _orderedRoomsSuggestionTypesList;
	id<MNBatchedViewModelIndividualKeysToSubscribeUpdating> _updater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNBatchedViewModelIndividualKeysToSubscribeUpdating> updater;              //@synthesize updater=_updater - In the implementation block
-(void)loadViewModelForKey:(id)arg1 batchElements:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)individualKeysToSubscribeForViewModelElementKey:(id)arg1 ;
-(id)initWithOrderedRoomsSuggestionTypesList:(id)arg1 ;
-(void)setUpdater:(id<MNBatchedViewModelIndividualKeysToSubscribeUpdating>)arg1 ;
-(id<MNBatchedViewModelIndividualKeysToSubscribeUpdating>)updater;
@end

