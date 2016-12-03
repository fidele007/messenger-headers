/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBKeychainItem : NSObject {

	NSString* _serviceID;
	NSString* _userID;
	NSString* _secretValue;
	void* _accessibleAttr;
	NSDictionary* _genericData;

}

@property (nonatomic,copy) NSString * serviceID;                      //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString * userID;                         //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * secretValue;                    //@synthesize secretValue=_secretValue - In the implementation block
@property (nonatomic,retain) void* accessibleAttr;                    //@synthesize accessibleAttr=_accessibleAttr - In the implementation block
@property (nonatomic,retain) NSDictionary * genericData;              //@synthesize genericData=_genericData - In the implementation block
+(id)genericData:(id)arg1 ;
+(id)userID:(id)arg1 ;
+(id)secretValue:(id)arg1 ;
+(id)accessibleAttr:(void*)arg1 ;
+(id)genericValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithServiceID:(id)arg1 userID:(id)arg2 secretValue:(id)arg3 accessibleAttr:(void*)arg4 genericData:(id)arg5 ;
-(NSString *)secretValue;
-(id)initWithServiceID:(id)arg1 ;
-(id)copyWithSecretValue:(id)arg1 ;
-(id)copyWithUserID:(id)arg1 ;
-(id)copyWithAccessibleAttr:(void*)arg1 ;
-(id)copyWithGenericData:(id)arg1 ;
-(id)genericValueForKey:(id)arg1 ;
-(id)copyWithGenericValue:(id)arg1 forKey:(id)arg2 ;
-(void*)accessibleAttr;
-(void)setSecretValue:(NSString *)arg1 ;
-(void)setAccessibleAttr:(void*)arg1 ;
-(id)initWithServiceID:(id)arg1 userID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)serviceID;
-(NSDictionary *)genericData;
-(void)setGenericData:(NSDictionary *)arg1 ;
-(void)setServiceID:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end

