/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSyncPersonRegularTypeProperties : FBValueObject <NSCopying> {

	BOOL _canInstallMessenger;
	BOOL _isMemorialized;
	BOOL _isPartial;
	BOOL _hasMessenger;
	BOOL _isFriend;
	long long _viewerConnectionStatus;

}

@property (nonatomic,readonly) BOOL canInstallMessenger;                      //@synthesize canInstallMessenger=_canInstallMessenger - In the implementation block
@property (nonatomic,readonly) BOOL isMemorialized;                           //@synthesize isMemorialized=_isMemorialized - In the implementation block
@property (nonatomic,readonly) BOOL isPartial;                                //@synthesize isPartial=_isPartial - In the implementation block
@property (nonatomic,readonly) BOOL hasMessenger;                             //@synthesize hasMessenger=_hasMessenger - In the implementation block
@property (nonatomic,readonly) BOOL isFriend;                                 //@synthesize isFriend=_isFriend - In the implementation block
@property (nonatomic,readonly) long long viewerConnectionStatus;              //@synthesize viewerConnectionStatus=_viewerConnectionStatus - In the implementation block
-(BOOL)isMemorialized;
-(long long)viewerConnectionStatus;
-(BOOL)canInstallMessenger;
-(BOOL)hasMessenger;
-(id)initWithCanInstallMessenger:(BOOL)arg1 isMemorialized:(BOOL)arg2 isPartial:(BOOL)arg3 hasMessenger:(BOOL)arg4 isFriend:(BOOL)arg5 viewerConnectionStatus:(long long)arg6 ;
-(BOOL)isPartial;
-(BOOL)isFriend;
@end

