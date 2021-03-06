/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MNDeferredOpenURLAction : FBValueObject <NSCopying> {

	NSArray* _URLs;
	NSString* _sourceApplication;
	id _annotation;

}

@property (nonatomic,copy,readonly) NSArray * URLs;                            //@synthesize URLs=_URLs - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceApplication;              //@synthesize sourceApplication=_sourceApplication - In the implementation block
@property (nonatomic,copy,readonly) id annotation;                             //@synthesize annotation=_annotation - In the implementation block
-(NSString *)sourceApplication;
-(id)initWithURLs:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(NSArray *)URLs;
-(id)annotation;
@end

