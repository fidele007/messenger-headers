/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface MNMessagesSyncClientOnlyDeltaThreadSnapshot : NSObject <TBase, NSCoding> {

	NSMutableArray* __threadKeys;
	NSString* __graphQLResult;
	BOOL __threadKeys_isset;
	BOOL __graphQLResult_isset;

}

@property (setter=setThreadKeys:,getter=threadKeys,nonatomic,retain) NSMutableArray * threadKeys; 
@property (setter=setGraphQLResult:,getter=graphQLResult,nonatomic,retain) NSString * graphQLResult; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)threadKeysIsSet;
-(NSMutableArray *)threadKeys;
-(void)setThreadKeys:(NSMutableArray *)arg1 ;
-(void)setGraphQLResult:(NSString *)arg1 ;
-(id)initWithThreadKeys:(id)arg1 graphQLResult:(id)arg2 ;
-(void)unsetThreadKeys;
-(NSString *)graphQLResult;
-(BOOL)graphQLResultIsSet;
-(void)unsetGraphQLResult;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

