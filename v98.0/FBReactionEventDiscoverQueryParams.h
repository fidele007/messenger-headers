/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, NSNumber, FBEventDiscoverSuggestionLatLon, FBEventDiscoverSuggestionBoundingBox;

@interface FBReactionEventDiscoverQueryParams : FBGraphQLInput {

	NSString* _suggestionToken;
	NSString* _suggestionType;
	NSArray* _eventCategories;
	NSNumber* _eventCategory;
	NSString* _time;
	NSString* _city;
	FBEventDiscoverSuggestionLatLon* _latLon;
	NSString* _range;
	NSString* _sort;
	NSString* _tags;
	NSString* _keywords;
	FBEventDiscoverSuggestionBoundingBox* _boundingBox;
	NSString* _includeConnected;
	NSArray* _eventFlags;
	NSString* _timeOfTheDay;
	NSArray* _hoursRange;

}

@property (nonatomic,copy) NSString * suggestionToken;                                      //@synthesize suggestionToken=_suggestionToken - In the implementation block
@property (nonatomic,copy) NSString * suggestionType;                                       //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,copy) NSArray * eventCategories;                                       //@synthesize eventCategories=_eventCategories - In the implementation block
@property (nonatomic,copy) NSNumber * eventCategory;                                        //@synthesize eventCategory=_eventCategory - In the implementation block
@property (nonatomic,copy) NSString * time;                                                 //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * city;                                                 //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) FBEventDiscoverSuggestionLatLon * latLon;                        //@synthesize latLon=_latLon - In the implementation block
@property (nonatomic,copy) NSString * range;                                                //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) NSString * sort;                                                 //@synthesize sort=_sort - In the implementation block
@property (nonatomic,copy) NSString * tags;                                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSString * keywords;                                             //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) FBEventDiscoverSuggestionBoundingBox * boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,copy) NSString * includeConnected;                                     //@synthesize includeConnected=_includeConnected - In the implementation block
@property (nonatomic,copy) NSArray * eventFlags;                                            //@synthesize eventFlags=_eventFlags - In the implementation block
@property (nonatomic,copy) NSString * timeOfTheDay;                                         //@synthesize timeOfTheDay=_timeOfTheDay - In the implementation block
@property (nonatomic,copy) NSArray * hoursRange;                                            //@synthesize hoursRange=_hoursRange - In the implementation block
-(void)setSuggestionToken:(NSString *)arg1 ;
-(NSString *)suggestionToken;
-(void)setSuggestionType:(NSString *)arg1 ;
-(NSString *)suggestionType;
-(void)setEventCategory:(NSNumber *)arg1 ;
-(NSNumber *)eventCategory;
-(void)setEventCategories:(NSArray *)arg1 ;
-(NSArray *)eventCategories;
-(void)setEventFlags:(NSArray *)arg1 ;
-(NSArray *)eventFlags;
-(void)setHoursRange:(NSArray *)arg1 ;
-(NSArray *)hoursRange;
-(void)setLatLon:(FBEventDiscoverSuggestionLatLon *)arg1 ;
-(FBEventDiscoverSuggestionLatLon *)latLon;
-(void)setIncludeConnected:(NSString *)arg1 ;
-(NSString *)includeConnected;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)timeOfTheDay;
-(void)setTimeOfTheDay:(NSString *)arg1 ;
-(NSString *)tags;
-(void)setTime:(NSString *)arg1 ;
-(NSString *)time;
-(NSString *)range;
-(FBEventDiscoverSuggestionBoundingBox *)boundingBox;
-(void)setBoundingBox:(FBEventDiscoverSuggestionBoundingBox *)arg1 ;
-(void)setRange:(NSString *)arg1 ;
-(NSString *)sort;
-(void)setSort:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)city;
-(void)setTags:(NSString *)arg1 ;
-(void)setKeywords:(NSString *)arg1 ;
-(NSString *)keywords;
@end

