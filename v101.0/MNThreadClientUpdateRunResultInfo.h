/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNThreadClientUpdate, MNSimpleResult;

@interface MNThreadClientUpdateRunResultInfo : FBValueObject <NSCopying, NSCoding> {

	MNThreadClientUpdate* _sourceUpdate;
	MNSimpleResult* _jobResult;

}

@property (nonatomic,copy,readonly) MNThreadClientUpdate * sourceUpdate;              //@synthesize sourceUpdate=_sourceUpdate - In the implementation block
@property (nonatomic,copy,readonly) MNSimpleResult * jobResult;                       //@synthesize jobResult=_jobResult - In the implementation block
-(MNSimpleResult *)jobResult;
-(MNThreadClientUpdate *)sourceUpdate;
-(id)initWithSourceUpdate:(id)arg1 jobResult:(id)arg2 ;
@end

