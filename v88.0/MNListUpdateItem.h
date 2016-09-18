/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath;

@interface MNListUpdateItem : FBValueObject <NSCopying> {

	long long _updateAction;
	NSIndexPath* _originalIndexPath;
	NSIndexPath* _finalIndexPath;

}

@property (nonatomic,readonly) long long updateAction;                            //@synthesize updateAction=_updateAction - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * originalIndexPath;              //@synthesize originalIndexPath=_originalIndexPath - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * finalIndexPath;                 //@synthesize finalIndexPath=_finalIndexPath - In the implementation block
-(NSIndexPath *)finalIndexPath;
-(id)initWithUpdateAction:(long long)arg1 originalIndexPath:(id)arg2 finalIndexPath:(id)arg3 ;
-(NSIndexPath *)originalIndexPath;
-(long long)updateAction;
@end
