/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSArray, NSDictionary;

@interface FBAnalyticsEventSchema : NSObject {

	NSMutableDictionary* _requiredColumns;
	NSMutableDictionary* _optionalColumns;
	BOOL _clientEnforcement;
	NSString* _poc;
	NSArray* _subscribers;
	NSArray* _inheritFrom;

}

@property (nonatomic,copy) NSString * poc;                              //@synthesize poc=_poc - In the implementation block
@property (nonatomic,copy) NSArray * subscribers;                       //@synthesize subscribers=_subscribers - In the implementation block
@property (assign,nonatomic) BOOL clientEnforcement;                    //@synthesize clientEnforcement=_clientEnforcement - In the implementation block
@property (nonatomic,copy) NSDictionary * requiredColumns;              //@synthesize requiredColumns=_requiredColumns - In the implementation block
@property (nonatomic,copy) NSDictionary * optionalColumns;              //@synthesize optionalColumns=_optionalColumns - In the implementation block
@property (nonatomic,copy) NSArray * inheritFrom;                       //@synthesize inheritFrom=_inheritFrom - In the implementation block
-(id)initWithEventSchemaDictionary:(id)arg1 ;
-(NSArray *)inheritFrom;
-(void)insertColumnsFromInheritedSchema:(id)arg1 ;
-(NSDictionary *)requiredColumns;
-(NSDictionary *)optionalColumns;
-(NSString *)poc;
-(void)setPoc:(NSString *)arg1 ;
-(BOOL)clientEnforcement;
-(void)setClientEnforcement:(BOOL)arg1 ;
-(void)setRequiredColumns:(NSDictionary *)arg1 ;
-(void)setOptionalColumns:(NSDictionary *)arg1 ;
-(void)setInheritFrom:(NSArray *)arg1 ;
-(NSArray *)subscribers;
-(void)setSubscribers:(NSArray *)arg1 ;
@end

