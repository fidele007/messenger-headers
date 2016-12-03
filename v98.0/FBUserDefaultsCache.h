/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UILocalizedIndexedCollation, NSCalendar, NSDictionary;

@interface FBUserDefaultsCache : NSObject {

	BOOL _dirty;
	BOOL _didUpdateSinceLastForeground;
	unsigned _sortOrder;
	unsigned _nameFormat;
	UILocalizedIndexedCollation* _currentCollation;
	BOOL _abPersonCreationNeeded;
	BOOL _abPersonCreated;
	NSCalendar* _currentCalendar;
	NSDictionary* _localeSummarizeBlackList;
	BOOL _shouldShortenThousands;

}

@property (nonatomic,readonly) unsigned sortOrder; 
@property (nonatomic,readonly) unsigned nameFormat; 
@property (nonatomic,__weak,readonly) UILocalizedIndexedCollation * currentCollation; 
@property (nonatomic,__weak,readonly) NSCalendar * currentCalendar; 
@property (nonatomic,readonly) BOOL shouldShortenThousands; 
+(id)sharedUserDefaultsCache;
-(unsigned)nameFormat;
-(BOOL)shouldShortenThousands;
-(void)_updateIfDirty;
-(void)updateShouldShortenThousands;
-(void)_onDefaultsDidChange:(id)arg1 ;
-(void)_onCurrentLocaleDidChange:(id)arg1 ;
-(void)updateShouldShortenThousandsForLocale:(id)arg1 ;
-(void)_ensureAbPersonPreferencesWillBeFresh;
-(void)_createABPersonIfNeeded;
-(void)dealloc;
-(id)init;
-(unsigned)sortOrder;
-(NSCalendar *)currentCalendar;
-(UILocalizedIndexedCollation *)currentCollation;
-(void)_willEnterForeground:(id)arg1 ;
@end

