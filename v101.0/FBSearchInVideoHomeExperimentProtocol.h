/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBSearchInVideoHomeExperimentProtocol <NSObject>
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL nullstateShowRecentSearches; 
@property (nonatomic,readonly) BOOL useDarkStyle; 
@property (nonatomic,copy,readonly) NSString * nullstateSuggestionSource; 
@property (nonatomic,readonly) BOOL videoSerpShowChannelsTab; 
@optional
-(NSString *)nullstateSuggestionSource;
-(BOOL)videoSerpShowChannelsTab;

@required
-(BOOL)nullstateShowRecentSearches;
-(BOOL)useDarkStyle;
-(void)searchInVideoHomeLogExposureIfNeeded;
-(BOOL)enabled;

@end

