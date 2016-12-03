/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray, NSDictionary;

@interface FBEventsDiscoverSuggestionContext : NSObject <NSCopying> {

	NSMutableDictionary* _suggestionContext;

}

@property (nonatomic,copy) NSString * suggestionToken; 
@property (nonatomic,copy) NSString * suggestionType; 
@property (nonatomic,copy) NSString * eventCategory; 
@property (nonatomic,copy) NSArray * eventCategories; 
@property (nonatomic,copy) NSString * time; 
@property (nonatomic,copy) NSArray * hoursRange; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSDictionary * latLon; 
@property (nonatomic,copy) NSString * range; 
@property (nonatomic,copy) NSDictionary * discoveryBoundingBox; 
@property (nonatomic,copy) NSString * sort; 
@property (nonatomic,copy) NSArray * tags; 
@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) NSArray * eventFlags; 
@property (assign,nonatomic) BOOL includeConnected; 
+(id)fromRawJSONString:(id)arg1 ;
-(id)initWithNSDictionary:(id)arg1 ;
-(void)setSuggestionToken:(NSString *)arg1 ;
-(NSString *)suggestionToken;
-(void)setSuggestionType:(NSString *)arg1 ;
-(NSString *)suggestionType;
-(void)setEventCategory:(NSString *)arg1 ;
-(NSString *)eventCategory;
-(void)setEventCategories:(NSArray *)arg1 ;
-(NSArray *)eventCategories;
-(void)setEventFlags:(NSArray *)arg1 ;
-(NSArray *)eventFlags;
-(void)setHoursRange:(NSArray *)arg1 ;
-(NSArray *)hoursRange;
-(void)setLatLon:(NSDictionary *)arg1 ;
-(NSDictionary *)latLon;
-(NSDictionary *)discoveryBoundingBox;
-(void)setDiscoveryBoundingBox:(NSDictionary *)arg1 ;
-(void)setIncludeConnected:(BOOL)arg1 ;
-(BOOL)includeConnected;
-(id)toJSONString;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tags;
-(void)setTime:(NSString *)arg1 ;
-(NSString *)time;
-(NSString *)range;
-(void)setRange:(NSString *)arg1 ;
-(NSString *)sort;
-(void)setSort:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)city;
-(void)setTags:(NSArray *)arg1 ;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)keywords;
@end
