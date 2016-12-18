/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface FBAnalyticsEventSchemaValidator : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isUnitTest;
	NSMutableArray* _errorMessages;
	BOOL _byPassDeveloperNameCheck;
	NSMutableDictionary* _schemaPathLookup;
	NSMutableDictionary* _eventSchemaDict;
	NSMutableDictionary* _enumSchemaDict;
	NSString* _developerUnixName;

}

@property (nonatomic,copy) NSMutableDictionary * schemaPathLookup;               //@synthesize schemaPathLookup=_schemaPathLookup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventSchemaDict;              //@synthesize eventSchemaDict=_eventSchemaDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * enumSchemaDict;               //@synthesize enumSchemaDict=_enumSchemaDict - In the implementation block
@property (nonatomic,copy) NSString * developerUnixName;                         //@synthesize developerUnixName=_developerUnixName - In the implementation block
+(id)sharedValidator;
-(id)loadEventSchemaFromPath:(id)arg1 ;
-(id)loadEnumSchemaFromPath:(id)arg1 ;
-(id)_loadDataFromPath:(id)arg1 ;
-(id)eventSchemaDict:(id)arg1 ;
-(void)validateJsonData:(/*^block*/id)arg1 forEvent:(id)arg2 isUnitTest:(BOOL)arg3 ;
-(BOOL)validateDataType:(id)arg1 expectedType:(id)arg2 ;
-(id)enumSchemaDict:(id)arg1 ;
-(void)addFilePath:(id)arg1 forEvent:(id)arg2 ;
-(void)validateJsonData:(/*^block*/id)arg1 forEvent:(id)arg2 ;
-(void)_validateEvent:(id)arg1 withExtra:(/*^block*/id)arg2 ;
-(id)_expectedDataType:(id)arg1 inSchema:(id)arg2 ;
-(BOOL)validateDataType:(id)arg1 expectedDataType:(id)arg2 ;
-(BOOL)checkIfDeveloperNeedsValidation:(id)arg1 againstPOC:(id)arg2 againstSubscribers:(id)arg3 ;
-(void)setDeveloperUnixNameWithPocNameForEvent:(id)arg1 ;
-(long long)validationErrorCount;
-(void)setBypassDeveloperNameCheck:(BOOL)arg1 ;
-(NSMutableDictionary *)schemaPathLookup;
-(void)setSchemaPathLookup:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)eventSchemaDict;
-(void)setEventSchemaDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)enumSchemaDict;
-(void)setEnumSchemaDict:(NSMutableDictionary *)arg1 ;
-(NSString *)developerUnixName;
-(void)setDeveloperUnixName:(NSString *)arg1 ;
-(id)init;
-(id)queue;
@end
