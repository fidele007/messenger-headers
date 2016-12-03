/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class MNFrequentlyUsedEmojisStoreService, NSMutableDictionary, MNEmojiDataSourceListeningAnnouncer, MNEmojiOmnistore, FBEmojiUnicodeStore, NSString;

@interface MNEmojiDataSource : NSObject <FBViewerContextClassProvidable> {

	MNFrequentlyUsedEmojisStoreService* _frequentlyUsedEmojisStoreService;
	NSMutableDictionary* _visibleFrequentlyUsedEmojisByIndex;
	MNEmojiDataSourceListeningAnnouncer* _annoucer;
	MNEmojiOmnistore* _emojiOmnistore;
	FBEmojiUnicodeStore* _emojiSharedStore;

}

@property (assign,nonatomic) long long emojiFitzpatrickType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithFrequentlyUsedEmojisStoreService:(id)arg1 emojiOmnistore:(id)arg2 ;
-(long long)emojiFitzpatrickType;
-(void)setEmojiFitzpatrickType:(long long)arg1 ;
-(id)_visiblefrequentlyUsedEmojiForCellAtIndex:(long long)arg1 ;
-(id)_frequentlyUsedEmojiForCellAtIndex:(long long)arg1 ;
-(void)incrementUsageCounterForEmoji:(id)arg1 ;
-(id)emojiForCellAtIndex:(long long)arg1 category:(long long)arg2 withVisibilityConstraint:(BOOL)arg3 ;
-(long long)emojiCategoriesCount;
-(long long)numberOfEmojisAtCategory:(long long)arg1 ;
-(id)labelForCategory:(long long)arg1 ;
-(id)tabBarEmojiForCategory:(long long)arg1 ;
-(id)skinTonesForEmoji:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

