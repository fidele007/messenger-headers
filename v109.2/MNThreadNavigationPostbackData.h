/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNThreadNavigationPostbackData : FBValueObject <NSCopying> {

	NSString* _ref;
	NSString* _source;

}

@property (nonatomic,copy,readonly) NSString * ref;                 //@synthesize ref=_ref - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;              //@synthesize source=_source - In the implementation block
-(id)initWithRef:(id)arg1 source:(id)arg2 ;
-(NSString *)source;
-(NSString *)ref;
@end

