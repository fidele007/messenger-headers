/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBProviderDependencyGraphNode : FBValueObject <NSCopying> {

	NSString* _className;
	NSArray* _dependencies;
	long long _scope;

}

@property (nonatomic,copy,readonly) NSString * className;                //@synthesize className=_className - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,readonly) long long scope;                          //@synthesize scope=_scope - In the implementation block
-(id)initWithClassName:(id)arg1 dependencies:(id)arg2 scope:(long long)arg3 ;
-(NSArray *)dependencies;
-(long long)scope;
-(NSString *)className;
@end

