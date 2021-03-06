/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCustomLocalizedIndexedCollation.h>

@class NSArray, NSNotificationCenter, FBCache, NSString;

@interface FBJapaneseLocalizedIndexedCollation : NSObject <FBCustomLocalizedIndexedCollation> {

	NSNotificationCenter* _notificationCenter;
	FBCache* _collationCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@property (nonatomic,readonly) NSArray * sectionTitles; 
-(void)_onApplicationDidEnterBackground:(id)arg1 ;
-(void)_onApplicationDidReceiveMemoryWarning:(id)arg1 ;
-(unsigned long long)collationCacheSize;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSArray *)sectionTitles;
-(NSArray *)sectionIndexTitles;
-(long long)sectionForSectionIndexTitleAtIndex:(long long)arg1 ;
-(long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2 ;
-(id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2 ;
@end

