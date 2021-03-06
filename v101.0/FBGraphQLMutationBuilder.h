/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLQueryBuildable.h>

@class NSString, NSMutableDictionary, NSMutableSet, FBGraphQLQuery, FBGraphQLInput;

@interface FBGraphQLMutationBuilder : NSObject <FBGraphQLQueryBuildable> {

	BOOL _didBuild;
	NSString* _rootID;
	NSString* _callName;
	NSMutableDictionary* _parameters;
	NSMutableSet* _parameterNamesWithServerDefaultValues;
	Class _queryClass;
	FBGraphQLQuery* _query;
	FBGraphQLInput* _input;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(void)initialize;
-(id)getResult;
-(id)initWithRootID:(id)arg1 callName:(id)arg2 defaultParameterValues:(id)arg3 queryClass:(Class)arg4 initialParameterValues:(const id*)arg5 ;
-(id)_getMutationResult;
-(void)setParameterValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setInput:(id)arg1 ;
@end

