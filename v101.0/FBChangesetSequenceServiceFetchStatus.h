/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBChangesetSequenceServiceFetchStatus : NSObject {

	BOOL _hasMoreOnTop;
	BOOL _hasMoreOnBottom;

}

@property (nonatomic,readonly) BOOL hasMoreOnTop;                 //@synthesize hasMoreOnTop=_hasMoreOnTop - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreOnBottom;              //@synthesize hasMoreOnBottom=_hasMoreOnBottom - In the implementation block
-(id)initWithHasMoreOnTop:(BOOL)arg1 hasMoreOnBottom:(BOOL)arg2 ;
-(BOOL)hasMoreOnTop;
-(BOOL)hasMoreOnBottom;
@end

