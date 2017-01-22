/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadUpdateApplicationInfo;

@interface MNClientUpdateWithOptimisticOrder : FBValueObject <NSCopying> {

	MNThreadUpdateApplicationInfo* _applicationInfo;
	long long _order;

}

@property (nonatomic,copy,readonly) MNThreadUpdateApplicationInfo * applicationInfo;              //@synthesize applicationInfo=_applicationInfo - In the implementation block
@property (nonatomic,readonly) long long order;                                                   //@synthesize order=_order - In the implementation block
-(id)initWithApplicationInfo:(id)arg1 order:(long long)arg2 ;
-(long long)order;
-(MNThreadUpdateApplicationInfo *)applicationInfo;
@end
