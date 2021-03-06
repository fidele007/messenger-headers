/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAnalyticsDiagnosticInfo : NSObject {

	unsigned long long _persistSingleLogFailureCount;
	unsigned long long _persistSingleLogFailureBatchID;
	unsigned long long _combineMultiBatchFailureCount;
	unsigned long long _combineMultiBatchFailureBatchID;
	unsigned long long _deletedFileCount_networkFailure;
	unsigned long long _deletedFileBatchID_networkFailure;
	unsigned long long _deletedFileCount_illegalJson;
	unsigned long long _deletedFileBatchID_illegalJson;
	unsigned long long _deletedFileCount_tooManyFiles;
	unsigned long long _deletedFileBatchID_tooManyFiles;

}
-(id)getDiagnosticInfo;
-(void)increaseDiagnosticCount:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

